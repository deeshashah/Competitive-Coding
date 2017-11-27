# Maximum Sum Increasing Subsequence

#### Problem Statement
Given an array of n positive integers. Write a program to find the sum of maximum sum subsequence of the given array such that the intgers in the subsequence are sorted in increasing order.

#### Example

If A = {1, 50, 2, 3, 66, 4, 5}, then required maximum sum is: (1+2+3+66) = 72

#### Recurrence formula for Dynamic Programming

Let max_sum[i] denote the maximum sum uptil index i.

Thus, max_sum[i] = MAX{max_sum[i], max_sum[j] + A[i]} for all j<i and A[i]> A[j].
		