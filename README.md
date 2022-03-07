<h1 align="center">Process in Linux</h1>

<p align="center">
        <span>Process</span>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
        <span>First Step</span>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
        <span>Compile</span>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
        <span>Run</span>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
        <span>Clean</span>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
        <span>Explanation</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
</p>

---

## 📝 Process

step by step about how to create a child process that will become a zombie in the future.

---

## ☝️ First Step

```bash
$ git clone https://github.com/akazitoo/processLinux.git
$ cd processLinux
```

Cloning the project to local

---

## ✔️ Compile

```bash
$ make
```
Create a file 'main'

<br>

OBS: if you don't have 'make' installed

```bash
$ sudo apt install make
```

---

## ⚙️ Run

```bash
$ make run
```
Run the main file 

---

## 🧹 Clean

```bash
$ make clean
```

Delete the compiled file

---

## 📌 Explanation

Running the main file that creates a child process, which when they finish they become zombies. With the command 'ps -l' used in the makefile, we can see the states of the processes.
