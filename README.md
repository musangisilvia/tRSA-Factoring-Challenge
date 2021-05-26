# RSA-Factoring-Challenge


## INTRODUCTION

RSA is one of the oldest public-key cryptosystem that is used for secure data transmission. The acronym RSA comes from the surnames of [Ron Rivest](https://en.wikipedia.org/wiki/Ron_Rivest), [Adi Shamir](https://en.wikipedia.org/wiki/Adi_Shamir) and [Leonard Adleman](https://en.wikipedia.org/wiki/Leonard_Adleman) who publicly described the algorithm in 1976.

## The Task

An unsecured network was searched and the numbers used to encrypt very important documents were found. It seems that those numbers are not always generated using large enough prime numbers. The mission is to factorize these numbers as fast as possible before the target fixes this bug on their server - so that the encrypted documents can be decoded.

### 0-Factorize all the things!

Here, as many number as possible will be factorized into a product of two smaller numbers.

- Usage: ``` factors <file> ```
	* where ``` <file> ``` is file containing natural numbers to factor.
	* One number per line.
	* Assume that all lines will be valid natural numbers greater than 1
	* Assume that there will be no empty linen, no space before and after the valid number.
	* File will always end in a new line
- Output format: ``` n=p*q ```
	* one factorization per line
	* ``` p ``` and ``` q ``` don't have to be prime numbers.
- Program should run without any dependancy
- Time limit: program will be killed after 5 seconds if it hasn't finished.

