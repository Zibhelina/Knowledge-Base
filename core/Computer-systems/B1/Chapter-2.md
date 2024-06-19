# Chapter 2

## Section 2.4: Floating Point

Up until the early 1980s, there was no standard for representing floating-point numbers. An effort to establish such a standard was initiated under Intel's sponsorship, leading to the hiring of William Kahan, a professor at the University of California, Berkeley. Kahan collaborated with the Institute of Electrical and Electronics Engineers (IEEE) to develop a solution, resulting in the creation of the IEEE Standard 754, which is now supported and used by virtually all machines.

The first step to understand how the IEEE floating-point format works, we need to revisit the decimal notation and extend it for binary values. In decimal notation, numbers are represented as

$$
d_{m}d_{m-1}\cdots d_1d_0.d_{-1}\cdots d_{-n}
$$

for $m,n\in\mathbb{N}$ and $d_i\in\{0,1,\cdots,9\}$, where the value represented is obtained by taking the weighted sum of the digits in the sequence:

$$
\text{value}=\sum_{i=-n}^m10^id_i
$$

Digits to the left of the decimal point are integers while those to the right are fractional values. We can easily extend this idea for binary numbers by letting $d_i\in\{0,1\}$ in the sequence

$$
d_md_{m-1}\cdots d_1d_0.d_{-1}\cdots d_{-n}
$$

and taking the following weighted sum to obtained the represented value:

$$
\text{value}=\sum^m_{i=-n}2^{i}d_i
$$

Finite decimal notation cannot represent some numbers exactly, and the same is true for finite binary notation.

Positional notation, however, is not good enough. That is because representing very large numbers may lead to wasteful redundancies. For instance, $(101)_2\cdot 2^{100}$ would lead to a representation that contains one hundred, consecutive,  0’s. To fix that, we need to extend another familiar idea to the context of binary representation: scientific notation. Representing numbers in a form $x\cdot 2^y$ solves one of the problems that come with positional notation. 

The IEEE floating-point standard bases itself in this idea and represents numbers in the form $(-1)^{s} M\cdot 2^E$, where $s$ determines whether the number is positive or negative, $M$ is a fractional binary value ranging from $1$ to $2-\epsilon$ and $E$ is an integer.