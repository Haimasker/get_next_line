<h1 align="center">
	get_next_line
</h1>

<p align="center">
	This project was made in accordance with the project of School 21 (Ecole 42).
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/haimasker/get_next_line?color=blue" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/haimasker/get_next_line?color=blue" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/haimasker/get_next_line?color=blue" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/haimasker/get_next_line?color=blue" />
</p>

<h3 align="center">
	<a href="#preamble">Preamble</a>
	<span> · </span>
  <a href="#description">Description</a>
	<span> · </span>
	<a href="#installation">Installation and usage</a>
	<span> · </span>
	<a href="#testing">Testing</a>
</h3>

---

<a name="preamble"></a>
## Preamble

The purpose of this project is to code a function that returns a line read from a file descriptor.

You can see the subject here: [get_next_line](en.subject.pdf).

Main requirements, rules and code style: [Norm](en_norm.pdf).

---

<a name="description"></a>
## Description

### Mandatory part

* Each call to ``get_next_line()`` should return next line from the text file pointed to <br>
by the file descriptor. 

* Function should return ``NULL`` in case of an error or if there is nothing else to read.

* Reading from the text file should work due to reading characters piece by piece into <br>
buffer with ``BUFFER_SIZE`` size.

### Bonus part

* In addition to the previous requirements ``get_next_line()`` must manage multiple file <br>
descriptors at the same time. At most one static variable is allowed.
  
---

<a name="installation"></a>
## Installation and usage

* Copy this project in your project directory.

* To use ``get_next_line`` in your code just include library header:

```c
#include "get_next_line.h"
```

or 

```c
#include "get_next_line_bonus.h"
```

* After that just use ``get_next_line()`` function where it is necessary.

---

<a name="testing"></a>
## Testing

* You can check code norm due to [norminette](https://github.com/42School/norminette).

* This is testers for get_next_line project:

	* [gnlTester](https://github.com/Tripouille/gnlTester)
