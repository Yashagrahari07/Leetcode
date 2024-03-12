<h2><a href="https://leetcode.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list/">1171. Remove Zero Sum Consecutive Nodes from Linked List</a></h2><img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' /><hr><p>Given the <code>head</code>&nbsp;of a linked list, we repeatedly delete consecutive sequences of nodes that sum to <code>0</code>&nbsp;until there are no such sequences.</p>

<p>After doing so, return the head of the final linked list.  You may return any such answer.</p>

<p>(Note that in the examples below, all sequences are serializations of <code>ListNode</code>&nbsp;objects.)</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> head = [1,2,-3,3,1]
<strong>Output:</strong> [3,1]
<strong>Note:</strong> The answer [1,2,1] would also be accepted.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> head = [1,2,3,-3,4]
<strong>Output:</strong> [1,2,4]
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> head = [1,2,3,-3,-2]
<strong>Output:</strong> [1]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><strong>The given linked list will contain between <code>1</code> and <code>1000</code> nodes.</strong></li>
	<li><strong>Each node in the linked list has <strong><code>-1000 &lt;= node.val &lt;= 1000<sup>5</sup></code></li>
</ul>