<h2><a href="https://leetcode.com/problems/score-of-parentheses/">856. Score of Parentheses</a></h2><img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' /><hr><p>Given a balanced parentheses string s, return the <code>score</code>&nbsp;of the string.</p>

<p>The <code>score</code>&nbsp;of a balanced parentheses string is based on the following rule:</p>

<ul>
	<li><strong>"()" has score 1.</strong></li>
	<li><strong>AB has score A + B, where A and B are balanced parentheses strings.</strong></li>
	<li><strong>(A) has score 2 * A, where A is a balanced parentheses string.</strong></li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = "()"
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = "(())"
<strong>Output:</strong> 2
</pre>

<pre>
<strong>Input:</strong> s = "()()"
<strong>Output:</strong> 2
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= s.length &lt;= 50<sup>5</sup></code></li>
	<li><strong>s consists of only '(' and ')'.</strong></li>
	<li><strong>s is a balanced parentheses string.</strong></li>
</ul>