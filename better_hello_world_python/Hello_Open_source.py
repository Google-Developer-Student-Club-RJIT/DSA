from tkinter import *

root = Tk()
lbl=Label(root, text="HELLO_WORLD", fg='Purple', font=("Helvetica", 40) , borderwidth=5 ,relief = GROOVE)
lbl.place(x=100, y=150)
root.title("HELLO WORLD")
root.geometry("600x400+10+20")
root.mainloop()