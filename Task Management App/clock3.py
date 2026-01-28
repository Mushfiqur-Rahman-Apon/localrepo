from tkinter import *
from time import strftime
import winsound

root = Tk()
root.title("Smart Clock")
root.geometry("900x500")
root.configure(bg="#1e1e1e")

# ------------------ VARIABLES ------------------
dark_mode = True
alarm_time = StringVar()
tasks = []

# ------------------ FUNCTIONS ------------------
def toggle_mode():
    global dark_mode
    dark_mode = not dark_mode
    bg = "#1e1e1e" if dark_mode else "#f2f2f2"
    fg = "cyan" if dark_mode else "black"

    root.configure(bg=bg)
    clock_label.config(bg=bg, fg=fg)
    date_label.config(bg=bg, fg=fg)
    task_label.config(bg=bg, fg=fg)

def update_time():
    current_time = strftime('%I:%M:%S %p')
    current_date = strftime('%A, %d %B %Y')

    clock_label.config(text=current_time)
    date_label.config(text=current_date)

    # Tick sound
    winsound.Beep(1000, 50)

    # Alarm check
    if alarm_time.get() == strftime('%I:%M %p'):
        winsound.Beep(2000, 1000)

    clock_label.after(1000, update_time)

def set_alarm():
    alarm_display.config(text=f"⏰ Alarm set: {alarm_time.get()}")

def add_task():
    task = task_entry.get()
    if task:
        task_list.insert(END, f"• {task}")
        task_entry.delete(0, END)

# ------------------ UI ------------------

clock_label = Label(
    root,
    font=("Arial", 70),
    bg="#1e1e1e",
    fg="cyan"
)
clock_label.pack(pady=10)

date_label = Label(
    root,
    font=("Arial", 30),
    bg="#1e1e1e",
    fg="cyan"
)
date_label.pack()

# ---- Alarm ----
alarm_frame = Frame(root, bg="#1e1e1e")
alarm_frame.pack(pady=10)

Entry(alarm_frame, textvariable=alarm_time, font=("Arial", 14), width=10).pack(side=LEFT, padx=5)
Button(alarm_frame, text="Set Alarm", command=set_alarm).pack(side=LEFT)

alarm_display = Label(root, text="", bg="#1e1e1e", fg="orange")
alarm_display.pack()

# ---- Tasks ----
task_label = Label(root, text="🧾 Tasks", font=("Arial", 20), bg="#1e1e1e", fg="cyan")
task_label.pack(pady=5)

task_entry = Entry(root, font=("Arial", 14), width=40)
task_entry.pack()

Button(root, text="Add Task", command=add_task).pack(pady=5)

task_list = Listbox(root, font=("Arial", 14), width=40, height=5)
task_list.pack()

# ---- Controls ----
Button(root, text="🌓 Toggle Dark/Light", command=toggle_mode).pack(pady=10)

# ------------------
update_time()
root.mainloop()
