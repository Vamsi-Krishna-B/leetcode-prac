# DSA Mastery Guide — Basics to Advanced (C++ / Python, LeetCode-first)

A thorough, pattern-first path through Data Structures & Algorithms. No fixed deadline — the goal is depth, not speed. Work phase by phase; don't skip ahead.

## Core Philosophy

- **Patterns beat problem count.** LeetCode has 3000+ problems, but roughly 15-20 recurring patterns cover the vast majority of them. Learn the pattern, not the specific solution.
- **Recognize before you code.** For every problem, first ask "what family does this belong to?" — the trigger-phrase tables below exist for this.
- **Timebox before peeking.** Give yourself 20-30 minutes of genuine struggle. If stuck, look at a *hint*, not the full solution. Reading the editorial in 5 minutes teaches you nothing that survives to interview day.
- **Revisit, don't just move on.** A problem solved once and never revisited is forgotten within weeks. Use spaced review (details in Section 4).
- **Mediums are the real target.** Most interview questions are medium difficulty. Don't rush to hards — build medium fluency in a topic first.

---

## 1. The Spine + Supplements (best free sources)

Since you're going thorough, use **one structured spine** to walk basics→advanced in order, and **one pattern-drilling list** for revision/interview polish once a topic is done.

| Resource | Role | Why |
|---|---|---|
| **[Striver's A2Z DSA Sheet](https://takeuforward.org/dsa/strivers-a2z-sheet-learn-dsa-a-to-z)** (takeuforward.org) | **Primary spine** | Free, ~455 problems across 18 sections, ordered A→Z from pure basics through advanced graphs/DP/tries. Comes with free video + article explanation per problem and a built-in progress tracker. Covers foundational things (recursion theory, sorting internals, bit manipulation) that interview-only lists skip. |
| **[NeetCode 150 / Roadmap](https://neetcode.io/roadmap)** | **Pattern-drill + revision layer** | 150 problems across 18 interview-relevant patterns, each with a free video walkthrough. Use it *after* finishing a topic on Striver's sheet as a second pass — natural spaced repetition. |
| **[Abdul Bari's Algorithms playlist](https://www.youtube.com/playlist?list=PLsr8vTgyLdy_YndxNcI4WkH5Vorj5qvrv)** (YouTube, @abdul_bari) | **Theory deep-dives** | When you need the *why* behind an algorithm (sorting internals, graph theory, DP foundations, complexity proofs) rather than just an interview trick — best free conceptual teacher for this. |
| **[Grind 75](https://www.techinterviewhandbook.org/grind75)** (techinterviewhandbook.org) | **Final-stretch polish** | A generator, not a fixed list — feed it your remaining weeks and hours/week and it outputs a prioritized, difficulty-ordered schedule. Save this for the last 4-6 weeks before you actually start interviewing. |
| **[LeetCode official study plans](https://leetcode.com/studyplan)** | **Alternative/backup** | Similar topic-ordered plans directly on the platform you're practicing on. |
| **[GeeksforGeeks DSA](https://www.geeksforgeeks.org/dsa/dsa-tutorial-learn-data-structures-and-algorithms/)** | **Reference when stuck** | Good for a second explanation of a concept in article form, or to look up a specific algorithm's implementation. |

**How to combine them:** work through Striver's sheet topic by topic in the phase order below. When you finish a topic, do the matching NeetCode section as reinforcement. Keep Grind 75 in your back pocket for the final polish stage whenever that comes.

---

## 2. Phase 0 — Setup (before Phase 1)

- **Complexity analysis:** Big-O, Big-Θ, Big-Ω, how to derive time/space complexity by inspection, why O(n log n) beats O(n²) at scale.
- **C++ toolkit:** `vector`, `pair`, `string`, `unordered_map`/`unordered_set`, `map`/`set` (ordered/BST-backed), `stack`, `queue`, `deque`, `priority_queue`. Know the time complexity of each operation.
- **Python toolkit:** `list`, `dict`, `set`, `tuple`, `collections.deque`, `heapq`, `collections.Counter`, `collections.defaultdict`, `itertools.permutations/combinations`. Know which are O(1) vs O(n).
- **Basic math (light touch):** GCD/LCM, Sieve of Eratosthenes, modular arithmetic — useful later, not a blocker.

---

## 3. The Roadmap (Phase 1 → Phase 14)

Each row: what to learn, the pattern(s) it maps to (with the trigger phrase to recognize it in a new problem), and a handful of anchor LeetCode problems to build the pattern before moving on.

### Phase 1 — Arrays, Hashing, Two Pointers, Sliding Window

| Pattern | Trigger phrase | Anchor problems |
|---|---|---|
| Hashing | "have I seen this before / count occurrences" | Two Sum, Contains Duplicate, Group Anagrams |
| Prefix Sum + HashMap | "count subarrays with sum/property X" | Subarray Sum Equals K, Product of Array Except Self |
| Two Pointers (opposite ends) | sorted array, pair/triplet sum, palindrome check | 3Sum, Container With Most Water, Trapping Rain Water |
| Two Pointers (same direction) | in-place dedupe/partition | Remove Duplicates from Sorted Array |
| Sliding Window (fixed/variable) | "longest/shortest contiguous subarray/substring with constraint" | Longest Substring Without Repeating Characters, Minimum Window Substring, Best Time to Buy/Sell Stock |

### Phase 2 — Sorting & Binary Search

- Learn how merge sort, quicksort, and counting sort actually work internally (Abdul Bari is excellent here) — don't just call `sort()`.
- **Binary Search** trigger: sorted data, or "minimize/maximize X such that condition holds" (binary search *on the answer*, over a monotonic feasibility function).
- Anchors: Binary Search, Search in Rotated Sorted Array, Find Minimum in Rotated Sorted Array, Koko Eating Bananas, Capacity To Ship Packages Within D Days, Median of Two Sorted Arrays.

### Phase 3 — Recursion & Backtracking

- Recursion trigger: problem breaks into identical smaller subproblems.
- Backtracking trigger: "generate all subsets/permutations/combinations", constraint satisfaction (place → recurse → undo).
- Anchors: Subsets, Permutations, Combination Sum, Word Search, Palindrome Partitioning, N-Queens, Sudoku Solver.

### Phase 4 — Linked List

- Fast & Slow Pointers trigger: cycle detection, find the middle, find the Nth-from-end.
- Anchors: Reverse Linked List, Linked List Cycle, Merge Two Sorted Lists, Remove Nth Node From End, Reorder List, Copy List with Random Pointer, LRU Cache (combines linked list + hashmap).

### Phase 5 — Stacks & Queues

- Monotonic Stack trigger: "next greater/smaller element", histogram-style problems.
- Anchors: Valid Parentheses, Min Stack, Daily Temperatures, Next Greater Element I/II, Largest Rectangle in Histogram, Sliding Window Maximum (monotonic deque).

### Phase 6 — Strings

- Anchors: Valid Anagram, Longest Palindromic Substring, Palindromic Substrings, Longest Common Prefix. (Advanced string matching — KMP, Z-function, Rabin-Karp — is optional; park it for Phase 14 if you go competitive.)

### Phase 7 — Trees & BSTs

- DFS/BFS trigger: any tree/graph traversal; BFS specifically for level-order or shortest path on unweighted structures.
- Anchors: Invert Binary Tree, Maximum Depth of Binary Tree, Diameter of Binary Tree, Balanced Binary Tree, Same Tree, Subtree of Another Tree, Binary Tree Level Order Traversal, Validate Binary Search Tree, Kth Smallest Element in a BST, Lowest Common Ancestor of a BST, Construct Binary Tree from Preorder and Inorder Traversal, Binary Tree Maximum Path Sum, Serialize and Deserialize Binary Tree.

### Phase 8 — Heaps / Priority Queue

- Top-K trigger: "kth largest/smallest", "k closest", streaming median.
- Anchors: Kth Largest Element in an Array, K Closest Points to Origin, Last Stone Weight, Task Scheduler, Find Median from Data Stream (two-heap pattern), Merge k Sorted Lists.

### Phase 9 — Tries

- Trigger: prefix search, autocomplete, word dictionaries.
- Anchors: Implement Trie (Prefix Tree), Design Add and Search Words Data Structure, Word Search II.

### Phase 10 — Graphs

- Topological Sort trigger: dependency ordering on a DAG.
- Union-Find trigger: connectivity queries, cycle detection in an undirected graph.
- Anchors: Number of Islands, Clone Graph, Course Schedule I & II, Pacific Atlantic Water Flow, Graph Valid Tree, Number of Connected Components, Redundant Connection, Word Ladder, Alien Dictionary, Network Delay Time (Dijkstra).
- This is the single deepest topic — Striver's Graph series on takeuforward.org is unusually thorough (BFS/DFS, topo sort, Dijkstra, Bellman-Ford, Floyd-Warshall, MST via Prim's/Kruskal's, bridges/articulation points) and worth doing in full even if some of it is beyond typical interview scope.

### Phase 11 — Dynamic Programming (the pattern people underinvest in — don't skip it for graphs)

| Sub-pattern | Anchors |
|---|---|
| 1D DP | Climbing Stairs, House Robber, House Robber II, Decode Ways |
| Knapsack family (0/1, unbounded) | Partition Equal Subset Sum, Target Sum, Coin Change |
| Grid / 2D DP | Unique Paths, Minimum Path Sum |
| String DP | Longest Common Subsequence, Edit Distance, Word Break |
| Subsequence / Partition DP | Longest Increasing Subsequence, Palindromic Substrings (DP version), Burst Balloons |

Rule of thumb for every DP problem: define the **state** precisely before writing any code, find the **recurrence**, then decide top-down (memoization) vs bottom-up (tabulation). Striver's DP playlist builds this habit step by step and is widely considered the best free structured DP course.

### Phase 12 — Greedy & Intervals

- Merge Intervals trigger: overlapping ranges.
- Anchors: Merge Intervals, Insert Interval, Non-overlapping Intervals, Meeting Rooms II, Jump Game I & II, Gas Station, Partition Labels.

### Phase 13 — Bit Manipulation

- Trigger: XOR-based uniqueness, power-of-two checks, counting set bits.
- Anchors: Single Number, Number of 1 Bits, Counting Bits, Missing Number, Reverse Bits, Sum of Two Integers.

### Phase 14 — Advanced / Optional Polish

Only needed for competitive programming or top-tier/quant-style interviews:
- Segment Tree, Fenwick Tree (Binary Indexed Tree) — range query/update.
- Advanced graphs: Floyd-Warshall, Prim's/Kruskal's MST in full.
- Advanced DP: digit DP, bitmask DP, DP on trees.
- Advanced strings: KMP, Z-function, Rabin-Karp, Manacher's algorithm.
- Reference: [cp-algorithms.com](https://cp-algorithms.com) is the standard free reference here.

---

## 4. How to Practice Each Problem (the loop)

1. **Read → classify.** Before coding, name the pattern out loud using the trigger phrases above.
2. **Attempt cold, 20-30 min timer.** No editorial. If stuck, take one hint at a time, not the full solution.
3. **After solving (even if you got it), write 2-3 lines:** the pattern name, the key insight, and the mistake you made (wrong pointer move, off-by-one, wrong base case, etc.). This note is worth more than the 50th random problem.
4. **Spaced re-solve.** Revisit the problem from scratch (no notes) on this rough schedule, doubling the interval each time you succeed easily: Day 1 (solve) → Day 3 → Day 7 → Day 14 → Day 30. If a repeat feels trivial, skip further ahead; if it's shaky, reset the interval. A spreadsheet, Notion table, or Anki deck all work — the tool doesn't matter, the habit does.
5. **Mix patterns once past the intro phase.** Doing 10 sliding-window problems back to back teaches autopilot, not recognition. Once you've built the base for a pattern, interleave it with earlier patterns during review.
6. **Difficulty mix:** 1-2 easy to lock in the pattern → 3-5 medium to see real variation → 1-2 hard once the topic feels solid. Don't front-load hards.

**Simple tracker template** (copy into a sheet):

| Date | Problem | Pattern | Difficulty | Time Taken | Key Insight / Mistake | Next Review |
|---|---|---|---|---|---|---|
| | | | | | | |

---

## 5. Putting It Together

1. Work Phases 0-13 in order on **Striver's A2Z Sheet**, one topic at a time, using the trigger-phrase tables above to check your pattern recognition as you go.
2. After each topic, do the matching section on **NeetCode's roadmap** as a second pass — it's a natural spaced-repetition checkpoint and adds interview-specific variations.
3. Treat **Phase 14 (advanced)** as optional — only pull it in if you're aiming at competitive programming or a research/quant-style interview track.
4. Whenever you're 4-6 weeks out from actually interviewing, switch your last stretch to **Grind 75**, set to your real remaining weeks, for a tightly paced, priority-ordered final pass — plus start timed mock interviews.

This order roughly matches both Striver's and NeetCode's own sequencing, so you won't be fighting either resource's structure.
