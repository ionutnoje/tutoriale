from tkinter import *

# widgets = GUI elements: buttons, textboxes, labels, images
# windows = serves as a container to hold or contain these widgets

window = Tk() # instantiate an instance of a window
window.geometry("420x420")
window.title("first GUI program in python")

icon = PhotoImage(file='logo.png')
window.iconphoto(True,icon)

window.config(background="#5cfcff")

window.mainloop() # place window on computer screen, listen for events