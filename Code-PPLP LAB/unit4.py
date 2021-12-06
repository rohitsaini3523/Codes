""" import tkinter as tk
master =tk.Tk()
var1= tk.IntVar()
tk.Checkbutton(master,text='male',variable=var1).grid(row =0)
var2 =tk.IntVar()
tk.Checkbutton(master,text='female',variable=var2).grid(row =1)
master,tk.mainloop()
 """

import tkinter as tk
'''w=tk.Tk()
w.title("My window")
label=tk.Label(w,text="This is my first GUI program").pack()
w.mainloop()'''

'''r=tk.Tk()
r.title("Example of button widget")
button=tk.Button(r,text="Stop",width=25,command=r.destroy,bg="light gray",activebackground="dark gray")
button.pack()
r.mainloop()'''

'''master=tk.Tk()
master.title("CANVAS")
w=tk.Canvas(master,width=40,height=60)
w.pack()
canvas_height=100
canvas_width=200
y=int(canvas_height/2)
w.create_line(0,y,canvas_width,canvas_height)
w.mainloop()'''

master=tk.Tk()
var1=tk.IntVar()
tk.Checkbutton(master,text='male',variable=var1).grid(row=0,sticky='W')
var2=tk.IntVar()
tk.Checkbutton(master,text='female',variable=var2).grid(row=1,sticky='W')
master.mainloop()