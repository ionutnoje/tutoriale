import tensorflow as tf
import numpy as np
import matplotlib.pyplot as plt
from tensorflow.keras.utils import plot_model

"""
Evaluating a model
A typical workflow you'll go through when building neural networks is:

Build a model -> evaluate it -> build (tweak) a model -> evaluate it -> build (tweak) a model -> evaluate it...
The tweaking comes from maybe not building a model from scratch but adjusting an existing one.

Visualize, visualize, visualize
When it comes to evaluation, you'll want to remember the words: "visualize, visualize, visualize."

This is because you're probably better looking at something (doing) than you are thinking about something.

It's a good idea to visualize:

The data - what data are you working with? What does it look like?
The model itself - what does the architecture look like? What are the different shapes?
The training of a model - how does a model perform while it learns?
The predictions of a model - how do the predictions of a model line up against the ground truth (the original labels)?
Let's start by visualizing the model.

But first, we'll create a little bit of a bigger dataset and a new model we can use (it'll be the same as before, but the more practice the better).
"""

# Make a bigger dataset
X = np.arange(-100, 100, 4)
print(X)

# Make labels for the dataset (adhering to the same pattern as before)
y = np.arange(-90, 110, 4)
print(y)

"""Split data into training/test set One of the other most common and important steps in a machine learning project 
is creating a training and test set (and when required, a validation set). 

Each set serves a specific purpose:

Training set - the model learns from this data, which is typically 70-80% of the total data available (like the 
course materials you study during the semester). 

Validation set - the model gets tuned on this data, which is typically 10-15% of the total data available (like the 
practice exam you take before the final exam). 

Test set - the model gets evaluated on this data to test what it has learned, it's typically 10-15% of the total data 
available (like the final exam you take at the end of the semester). 

For now, we'll just use a training and test set, this means we'll have a dataset for our model to learn on as well as 
be evaluated on. 

We can create them by splitting our X and y arrays.

🔑 Note: When dealing with real-world data, this step is typically done right at the start of a project (the test set 
should always be kept separate from all other data). We want our model to learn on training data and then evaluate it 
on test data to get an indication of how well it generalizes to unseen examples. """

# Split data into train and test sets
X_train = X[:40]  # first 40 examples (80% of data)
y_train = y[:40]

X_test = X[40:]  # last 10 examples (20% of data)
y_test = y[40:]

len(X_train), len(X_test)

"""
Visualizing the data
Now we've got our training and test data, it's a good idea to visualize it.

Let's plot it with some nice colours to differentiate what's what.
"""

plt.figure(figsize=(10, 7))
# Plot training data in blue
plt.scatter(X_train, y_train, c='b', label='Training data')
# Plot test data in green
plt.scatter(X_test, y_test, c='g', label='Testing data')
# Show the legend
plt.legend()
plt.show()

# We can let our model know the input shape of our data using the input_shape parameter to the first layer (usually
# if input_shape isn't defined, Keras tries to figure it out automatically).


# Set random seed
tf.random.set_seed(42)

#  Creating the model
model = tf.keras.Sequential([
    tf.keras.layers.Dense(1, input_shape=[1]),  # layer input?
    tf.keras.layers.Dense(100, activation="relu"),  # hidden layer1
    tf.keras.layers.Dense(100, activation="relu"),  # hidden layer2
    tf.keras.layers.Dense(1)  # layer output
])

#  Compiling the model
model.compile(loss=tf.keras.losses.mae,
              optimizer=tf.keras.optimizers.Adam(learning_rate=0.01),
              metrics=["mae"])

#  Fitting the model
model.fit(X_train, y_train, epochs=1000, verbose=1)  # verbose controls how much gets output
print(model.summary())

"""
Calling summary() on our model shows us the layers it contains, the output shape and the number of parameters.

Total params - total number of parameters in the model. 
Trainable parameters - these are the parameters (patterns) 
the model can update as it trains. 
Non-trainable parameters - these parameters aren't updated during training (this 
is typical when you bring in the already learned patterns from other models during transfer learning).
"""

"""
Visualizing the predictions
Now we've got a trained model, let's visualize some predictions.

To visualize predictions, it's always a good idea to plot them against the ground truth labels.

Often you'll see this in the form of y_test vs. y_pred (ground truth vs. predictions).

First, we'll make some predictions on the test data (X_test), remember the model has never seen the test data.
"""

# Make predictions
y_preds = model.predict(X_test)

print(y_preds)


def plot_predictions(train_data=X_train,
                     train_labels=y_train,
                     test_data=X_test,
                     test_labels=y_test,
                     predictions=y_preds):
    """
  Plots training data, test data and compares predictions.
  """
    plt.figure(figsize=(10, 7))
    # Plot training data in blue
    plt.scatter(train_data, train_labels, c="b", label="Training data")
    # Plot test data in green
    plt.scatter(test_data, test_labels, c="g", label="Testing data")
    # Plot the predictions in red (predictions were made on the test data)
    plt.scatter(test_data, predictions, c="r", label="Predictions")
    # Show the legend
    plt.legend()
    plt.show()


plot_predictions(train_data=X_train,
                 train_labels=y_train,
                 test_data=X_test,
                 test_labels=y_test,
                 predictions=y_preds)

#  plot_model(model=model, show_shapes=True)


"""
Evaluating predictions
Alongside visualizations, evaluation metrics are your alternative best option for evaluating your model.

Depending on the problem you're working on, different models have different evaluation metrics.

Two of the main metrics used for regression problems are:

Mean absolute error (MAE) - the mean difference between each of the predictions. Mean squared error (MSE) - the 
squared mean difference between of the predictions (use if larger errors are more detrimental than smaller errors). 
The lower each of these values, the better. 

You can also use model.evaluate() which will return the loss of the model as well as any metrics setup during the compile step.
"""

# Evaluate the model on the test set
print(model.evaluate(X_test, y_test))

"""
In our case, since we used MAE for the loss function as well as MAE for the metrics, model.evaluate() returns them both.

TensorFlow also has built in functions for MSE and MAE.

For many evaluation functions, the premise is the same: compare predictions to the ground truth labels.
"""

# Calculate the mean absolute error
mae = tf.metrics.mean_absolute_error(y_true=y_test,
                                     y_pred=y_preds)
print(mae)

"""
Huh? That's strange, MAE should be a single output.

Instead, we get 10 values.

This is because our y_test and y_preds tensors are different shapes.
"""

"""
Remember how we discussed dealing with different input and output shapes is one the most common issues you'll come across, this is one of those times.

But not to worry.

We can fix it using squeeze(), it'll remove the the 1 dimension from our y_preds tensor, making it the same shape as y_test.

🔑 Note: If you're comparing two tensors, it's important to make sure they're the right shape(s) (you won't always 
have to manipulate the shapes, but always be on the look out, many errors are the result of mismatched tensors, 
especially mismatched input and output shapes). 
"""

# Shape before squeeze()
print(y_preds.shape)

# Shape after squeeze()
print(y_preds.squeeze().shape)

# What do they look like?
print(y_test, y_preds.squeeze())


"""
Okay, now we know how to make our y_test and y_preds tenors the same shape, let's use our evaluation metrics.
"""

# Calculate the MAE
mae = tf.metrics.mean_absolute_error(y_true=y_test,
                                     y_pred=y_preds.squeeze())  # use squeeze() to make same shape
print(mae)


# Calculate the MSE
mse = tf.metrics.mean_squared_error(y_true=y_test,
                                    y_pred=y_preds.squeeze())
print(mse)


# We can also calculate the MAE using pure TensorFlow functions.
# Returns the same as tf.metrics.mean_absolute_error()
tf.reduce_mean(tf.abs(y_test-y_preds.squeeze()))

"""
Again, it's a good idea to function anything you think you might use over again (or find yourself using over and over again).

Let's make functions for our evaluation metrics.
"""


def mae(y_test, y_pred):
    """
    Calculates mean absolute error between y_test and y_preds.
    """
    return tf.metrics.mean_absolute_error(y_test,
                                          y_pred)

def mse(y_test, y_pred):
    """
    Calculates mean squared error between y_test and y_preds.
    """
    return tf.metrics.mean_squared_error(y_test,
                                         y_pred)


"""Saving a model Once you've trained a model and found one which performs to your liking, you'll probably want to 
save it for use elsewhere (like a web application or mobile device). 

You can save a TensorFlow/Keras model using model.save().

There are two ways to save a model in TensorFlow:

The SavedModel format (default). The HDF5 format. The main difference between the two is the SavedModel is 
automatically able to save custom objects (such as special layers) without additional modifications when loading the 
model back in. 

Which one should you use?

It depends on your situation but the SavedModel format will suffice most of the time.

Both methods use the same method call.
"""


# Save a model using the SavedModel format
model.save('primul_model1')
print("model salvat")       
#INFO:tensorflow:Assets written to: best_model_SavedModel_format/assets
# Check it out - outputs a protobuf binary file (.pb) as well as other files
#!ls best_model_SavedModel_format
#Now let's save the model in the HDF5 format, we'll use the same method but with a different filename.

# Save a model using the HDF5 format
# model.save("best_model_HDF5_format.h5") # note the addition of '.h5' on the end
# Check it out
# !ls best_model_HDF5_format.h5)
# best_model_HDF5_format.h5




