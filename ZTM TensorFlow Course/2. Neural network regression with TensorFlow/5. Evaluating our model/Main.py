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
    tf.keras.layers.Dense(1, input_shape=[1]),  # layer input
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


