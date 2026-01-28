from tkinter import *
from time import strftime

root = Tk()
root.title("Digital Clock")
root.configure(bg="black")
root.attributes("-fullscreen", True)  

colors = ["cyan", "lime", "yellow", "magenta", "orange"]
color_index = 0

def time():
    global color_index
    current_time = strftime('%I:%M:%S %p')
    current_date = strftime('%A, %d %B %Y')

    clock_label.config(text=current_time, fg=colors[color_index])
    date_label.config(text=current_date, fg=colors[color_index])

    color_index = (color_index + 1) % len(colors)
    clock_label.after(1000, time)

def exit_fullscreen(event):
    root.destroy()

clock_label = Label(
    root,
    font=("Arial", 100),
    bg="black"
)
clock_label.pack(pady=20)

date_label = Label(
    root,
    font=("Arial", 40),
    bg="black"
)
date_label.pack()

root.bind("<Escape>", exit_fullscreen)  
time()
root.mainloop()
