<h2><a href="https://leetcode.com/problems/insert-interval/">57. Insert Interval</a></h2><img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' /><hr><p>You are given an array of non-overlapping intervals <code>intervals</code>&nbsp;where <code>intervals[i]= [start<sub>i</sub>, end<sub>i</sub>]</code>&nbsp;represent the start and the end of the <code>i<sup>th</sup></code>&nbsp;interval and <code>intervals</code>&nbsp;is sorted in ascending order by <code>start<sub>i</sub></code>&nbsp;. You are also given an interval newInterval = [start, end] that represents the start and end of another interval.</p>

<p>Insert <code>newInterval</code>&nbsp;into <code>intervals</code>&nbsp;such that <code>intervals</code>&nbsp;is still sorted in ascending order by <code>start<sub>i</sub></code>&nbsp; and <code>intervals</code>&nbsp;still does not have any overlapping intervals (merge overlapping intervals if necessary).</p>

<p>Return <code>intervals</code>&nbsp;after the insertion.</p>

<p><strong>Note</strong> that you don't need to modify <code>intervals</code>&nbsp;in-place. You can make a new array and return it.</p>


Given a binary array <code>nums</code>&nbsp;, return the maximum length of a contiguous subarray with an equal number of and <code>1</code>&nbsp;.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> intervals = [[1,3],[6,9]], newInterval = [2,5]
<strong>Output:</strong> [[1,5],[6,9]]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
<strong>Output:</strong> [[1,2],[3,10],[12,16]]
<strong>Explanation:</strong>Because the new interval [4,8] overlaps with [3,5],[6,7],[8,10].
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= intervals.length &lt;= 10<sup>4</sup></code></li>
	<li><strong>intervals[i].length == 2</strong></li>
	<li><code>0 &lt;= start<sub>i</sub> &lt;= end<sub>i</sub> &lt;= 10<sup>5</sup></code></li>
	<li><strong>intervals is sorted by <code>start<sub>i</sub></code>&nbsp;in ascending order.</strong></li>
	<li><strong>newInterval.length == 2</strong></li>
	<li><code>0 &lt;= start &lt;= end &lt;= 10<sup>5</sup></code></li>
</ul>