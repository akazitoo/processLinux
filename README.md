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

## ๐ Process

step by step about how to create a child process that will become a zombie in the future.

---

## โ๏ธ First Step

```bash
$ git clone https://github.com/akazitoo/processLinux.git
$ cd processLinux
$ cd src
```

Cloning the project to local

---

## โ๏ธ Compile

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

## โ๏ธ Run

```bash
$ make run
```
Run the main file 

---

## ๐งน Clean

```bash
$ make clean
```

Delete the compiled file

---

## ๐ Explanation

Running the main file that creates a child process, which when they finish they become zombies. With the command 'ps -l' used in the makefile, we can see the states of the processes.
