Measurement Methodology
Two clock_t variables (start and end) were placed immediately before and after
each function execution in main().
The difference between them was then divided by CLOCKS_PER_SEC to convert to
seconds, and was stored in a variable.
The total time was calculated by adding the seperate times of each process
after they had all run.
The recorded values were then printed.
The test was run three times, with the output appending to a new file called
instrumentation_lab-metrics.md.


Observerd Performance Differences
The average TOTAL time was 0.000568 seconds.
The average BUILD_DATA time was 0.000201 seconds.
The average PROCESS time was 0.000265 seconds.
The average REDUCE time was 0.000102 seconds.

The largest portion of execution time was spent on the REDUCE opperation.
REDUCE also had significant variance, with timings of 0.000262 seconds,
0.000250 seconds, and 0.000283 seconds.
BUILD_DATA was the second largest portion of execution time, and had very
consistent timings of 0.000199 seconds, 0.000202 seconds, and 0.000202 seconds.
REDUCE was the smallest portion of execution time, and also had very consistent
timings of 0.000103 seconds, 0.000100 seconds, and 0.000104 seconds.


Relation Between Runtime and Energy Consumption
Each computer opperation takes energy to complete. If a process has to complete
more opperations, it will take longer to complete, and also will take more
energy to complete. Therefore, a key way to reduce the energy consumption
of computer processes is reducing the runtime by reducing the required
opperations to be as few as possible. Another aspect is that increased runtime
will lead to an increased tempurature of the device running the process, which
lowers performance. Addressing heat buildup is a crucial aspect of maintaining
performance, and cooling also consumes energy.Reducing runtime will help
mitigate the number of computer opperations needed, and reduce the amount of
waste heat that needs to be cooled. Therefore, it is crucial to reduce the
runtime of the code that we write to reduce energy consumption.


Limitations of the Experiment
The test did not record how many opperations each function completed, which
would be helpful for identifying if particular function was taking
disproportionatly long to complete.
No baseline for energy consumption was established before running the test.
Without a baseline, it is difficult to compare the efficiency of this program
to other similar programs.
This test was also run on a machine that was not actively opperating. In normal
circumstances, the machine would be running opperations much more consistently,
and would perform differently when the hardware had been running for a long
time due to heat.


Practical Engineering Takeaway
Optimization efforts should focus their attention towards the PROCESS step, as
that is the most time consuming function. 
Need to conduct an investigation into why the time to complete on the PROCESS
step are so inconsistent.
Live metric collection should be considered for further data collection.
