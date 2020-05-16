from tkinter import*

window = Tk()
window title('''title of the experiment''')

window geometry('''no of pixels within single quotes'''

b1 = Button(window,text = '''text to be placed in the button,command = function defined on top''')
b1.grid('''row = pixelated value, column = pixelated value''')

e1_value = stringVar()
e1 = Entry(window,,textvariable = e1_value)
e1.grid(row ,column )

label1 = Label(window,text = )
label1.grid(row =    ,column = )

t1 = Text(window,height = ,width = )
t1.grid(row = ,column = )

window.mainloop
