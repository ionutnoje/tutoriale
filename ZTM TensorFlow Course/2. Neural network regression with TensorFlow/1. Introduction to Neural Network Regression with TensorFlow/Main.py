import tensorflow as tf
import numpy as np

"""
There are many definitions for a regression problem but in our case, we're going to simplify it to be: predicting a number.

For example, you might want to:

Predict the selling price of houses given information about them (such as number of rooms, size, number of 
bathrooms). Predict the coordinates of a bounding box of an item in an image. Predict the cost of medical insurance 
for an individual given their demographics (age, sex, gender, race). In this notebook, we're going to set the 
foundations for how you can take a sample of inputs (this is your data), build a neural network to discover patterns 
in those inputs and then make a prediction (in the form of a number) based on those inputs.
"""

"""
What we're going to cover
Specifically, we're going to go through doing the following with TensorFlow:

    Architecture of a regression model
    Input shapes and output shapes
        X: features/data (inputs)
        y: labels (outputs)
    Creating custom data to view and fit
    Steps in modelling
        Creating a model
        Compiling a model
            Defining a loss function
            Setting up an optimizer
            Creating evaluation metrics
        Fitting a model (getting it to find patterns in our data)
    Evaluating a model
        Visualizing the model ("visualize, visualize, visualize")
        Looking at training curves
        Compare predictions to ground truth (using our evaluation metrics)
    Saving a model (so we can use it later)
    Loading a model

Don't worry if none of these make sense now, we're going to go through each.
"""

"""
Typical architecture of a regression neural network
The word typical is on purpose.

Why?

Because there are many different ways (actually, there's almost an infinite number of ways) to write neural networks.

But the following is a generic setup for ingesting a collection of numbers, finding patterns in them and then 
outputting some kind of target number. 

Yes, the previous sentence is vague but we'll see this in action shortly.
"""

"""

        Hyperparameter              	Typical value
        
        Input layer shape	            Same shape as number of features (e.g. 3 for # bedrooms, # bathrooms, # car spaces in housing price prediction)
        Hidden layer(s)	                Problem specific, minimum = 1, maximum = unlimited
        Neurons per hidden layer	    Problem specific, generally 10 to 100
        Output layer shape	            Same shape as desired prediction shape (e.g. 1 for house price)
        Hidden activation	            Usually ReLU (rectified linear unit)
        Output activation	            None, ReLU, logistic/tanh
        Loss function	                MSE (mean square error) or MAE (mean absolute error)/Huber (combination of MAE/MSE) if outliers
        Optimizer	                    SGD (stochastic gradient descent), Adam
"""

"""Note: A hyperparameter in machine learning is something a data analyst or developer can set themselves, 
where as a parameter usually describes something a model learns on its own (a value not explicitly set by an 
analyst). """

"""
EXPLANATIONS:
    -in model.compile: 
                    -loss means the difference between the real result and the result that out NN provides
                    -optimizer means the way in which our NN should improve it's weights (ex: gradient descent)
                    
"""



