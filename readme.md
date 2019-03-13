## FIZZBUZZ

[![TravisCI](https://travis-ci.org/muromirg/fizzbuzz.svg?branch=master)](https://travis-ci.org/muromirg/fizzbuzz) [![Bintray](https://img.shields.io/bintray/v/helloo/fizzbuzzz/fizzbuzz_main.svg?maxAge=2592000)](https://bintray.com/helloo/fizzbuzzz/fizzbuzz_main) [![codecov](https://codecov.io/gh/muromirg/fizzbuzz/branch/master/graph/badge.svg)](https://codecov.io/gh/muromirg/fizzbuzz)



This project contains the FIZZBUZZ function, which:
1) Takes the string with numbers, divided by spaces, as input
	- Actually you can enter any symbols you want, they will be interpreted as their ASCII codes.
2) Returns the string with these numbers too, BUT:
	- ".. any number divisible by three is replaced by the word *fizz*
	   and any divisible by five by the word *buzz*. 
	   Numbers divisible by both become *fizzbuzz*" -- As [Wikipedia](https://en.wikipedia.org/wiki/Fizz_buzz) said.

Project can be built using bash and g++-7 compiler.

To build: 
- open bash in the project folder
- make 	    -- builds program main.out, which takes a string with numbers as argv[] parameters;
- make test -- builds test program test.out, which runs some unit tests.
