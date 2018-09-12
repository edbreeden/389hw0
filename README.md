# 389hw0

PART 1
I chose the number of iterations run for each list size in accordance with the table below.


 N     M
2^12 400
2^13 240
2^14 120
2^15 80
2^16 66
2^17 50
2^18 40
2^19 20
2^20 10
2^21 4
2^22 2
2^23 1
2^24 1

My reasoning for choosing these values was derived from testing many different combinations of values multiple times and looking at the standard deviation of running the benchmark with a given m value. I started by testing n = 2^24 which takes the most time per iteration, in order to find a standard deviation of results to use as a goal for the other results. I set m=1 for n = 2^24 arbitrarily since anything significantly more takes too much time, and ran the program 10 times to compare results. From these trials I found the standard deviation of average time/ coordinate to be .021 us. I planned on using this figure as a maximum sd for figuring out other m’s but I found that the long run time led to a much less consistent average time/ coordinate than I found for smaller n’s. My method of choosing m’s for the other n’s involved testing for the standard deviation of the results of 10 runs of the given n and an m chosen at first to be 2 times the m for 2n. If the sd was > .005 um, I increased the m. If the sd was much lower than .005 um, I did not guess that the m for the next n value (half of the one being tested) would need to be as much as twice as large. Other than for n=2^24 and n=2^23, I was able to find m’s that led to a maximum sd of .005 us.  I used this as a point of reference for deciding when m is high enough for each of the other n’s. If the standard deviation of 10 runs was ~.005 us or less,  I decided the m was probably appropriate for analyzing trends in the results with a small margin of error. I did not have a minimum sd, since a smaller sd means a more representative average, so many m values are higher than they needed to be for an sd of .005 us.
b) I used the mean result I found in multiple trials with the same variables.
c)
graph in separate file
