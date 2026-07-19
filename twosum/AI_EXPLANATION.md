<think>
Here's a thinking process:

1.  **Analyze User Input:**
   - **PR Title:** Two Sum problem solution
   - **PR Number:** 5
   - **Author:** Vamsi-Krishna-B
   - **Source/Target:** TwoSuM -> main
   - **URL:** https://github.com/Vamsi-Krishna-B/leetcode-prac/pull/5
   - **Files Added:**
     - `TwoSuM_bruteforce.cpp`
     - `TwoSuM_bruteforce.py`
     - `TwoSuM_optimal.cpp`
     - `TwoSuM_optimal.py`
     - `TwoSuM_optimised.cpp`
     - `TwoSuM_optimised.py`
   - **Code Content:** All files implement the classic "Two Sum" problem (LeetCode #1). They provide different approaches:
     - Brute force: Nested loops, O(n²) time, O(1) space.
     - "Optimal" (Two Pointer on sorted array): Sorts a copy, uses two pointers, O(n log n) time, O(n) space. *Note: The comment in the Python version correctly points out that this approach loses original indices, so it's not actually correct for the standard Two Sum problem which requires returning original indices.*
     - "Optimised" (Hash Map): Uses a hash map to store values and indices, O(n) time, O(n) space. This is the standard optimal solution.
   - **Structure Required:**
     # AI Explanation - TwoSuM
     ## Overview
     ## File-by-File Explanation
     ## Important Concepts
     ## How to Run or Review
     ## Notes

2.  **Draft - Section by Section:**

     *# AI Explanation - TwoSuM*
     (Keep as is)

     *## Overview*
     This pull request adds six new files implementing three different approaches to solve the classic "Two Sum" problem (finding two numbers in an array that add up to a specific target). The implementations are provided in both C++ and Python. The approaches range from a basic brute-force method to a sorting-based two-pointer technique, and finally to the most efficient hash map approach. Each file includes a `Solution` class and a `main`/script section with test cases to verify the output.

     *## File-by-File Explanation*
     I'll group them by approach/language for clarity, or list them individually as requested. The prompt says "File-by-File Explanation", so I'll list each file briefly.
     - `TwoSuM_bruteforce.cpp` & `TwoSuM_bruteforce.py`: Implement the brute-force approach using nested loops. It checks every possible pair of numbers. Time complexity: O(n²), Space: O(1).
     - `TwoSuM_optimal.cpp` & `TwoSuM_optimal.py`: Implement a two-pointer approach on a sorted copy of the input array. It moves pointers inward based on whether the current sum is less than or greater than the target. Time complexity: O(n log n) due to sorting, Space: O(n). *Note: As mentioned in the Python file's comment, this approach returns indices of the sorted array, not the original array, which deviates from the standard problem requirements.*
     - `TwoSuM_optimised.cpp` & `TwoSuM_optimised.py`: Implement the hash map (dictionary) approach. It iterates through the array once, checking if the complement (`target - current_number`) exists in the map. If found, it returns the indices. Time complexity: O(n), Space: O(n). This is the standard optimal solution for the problem.

     *## Important Concepts*
     - **Time vs. Space Trade-offs:** The files demonstrate how algorithmic choices impact performance. Brute force uses minimal memory but is slow. The hash map approach uses extra memory to achieve linear time complexity.
     - **Two-Pointer Technique:** Used in the "optimal" files, this technique efficiently narrows down search space in sorted data.
     - **Hash Maps / Dictionaries:** Used in the "optimised" files to store and retrieve values in O(1) average time, making it ideal for complement-finding problems.
     - **Index Preservation:** A key requirement of the Two Sum problem is returning the *original* indices. The hash map approach handles this correctly, while the sorting approach does not.

     *## How to Run or Review*
     - **C++ Files:** Compile and run using a C++ compiler (e.g., `g++ TwoSuM_bruteforce.cpp -o bruteforce && ./bruteforce`).
     - **Python Files:** Run directly with Python 3 (e.g., `python3 TwoSuM_optimised.py`).
     - All files include built-in test cases in their `main`/script sections that print the resulting index pairs to the console.

     *## Notes*
     - The naming convention uses "optimal" for the sorting approach and "optimised" for the hash map approach. In standard algorithmic practice, the hash map solution is considered the true optimal solution for this specific problem due to its O(n) time complexity and correct index handling.
     - The Python "optimal" file contains a helpful comment acknowledging that sorting loses original indices, making it unsuitable for the exact LeetCode prompt.
     - Consider standardizing file naming (e.g., `two_sum_brute_force.cpp`, `two_sum_hashmap.cpp`) and ensuring consistent formatting across languages for better maintainability.

3.  **Review & Refine (Self-Correction/Verification):**
     - Check structure: Matches exactly.
     - Check accuracy: Brute force is O(n²), sorting is O(n log n), hash map is O(n). Correct.
     - Check code specifics: The C++ optimal file returns `{left, right}` which are indices in the *sorted* array. The Python optimal file has a comment explicitly stating this limitation. I should mention this clearly.
     - Check naming: "optimal" vs "optimised" is a bit confusing. I'll note it.
     - Check run instructions: Accurate for both languages.
     - Tone: Beginner-friendly, concise, accurate.
     - Structure matches prompt exactly.
     - No invented behavior.
     - All good. I will generate the response now. 
     One minor thing: The prompt says "File-by-File Explanation". I'll list each file explicitly to strictly follow the structure, but keep it concise.

     Draft structure:
     # AI Explanation - TwoSuM
     ## Overview
     ...
     ## File-by-File Explanation
     - `TwoSuM_bruteforce.cpp` / `.py`: ...
     - `TwoSuM_optimal.cpp` / `.py`: ...
     - `TwoSuM_optimised.cpp` / `.py`: ...
     ## Important Concepts
     ...
     ## How to Run or Review
     ...
     ## Notes
     ...

     Everything looks solid. I'll produce the final output. 
     Self-Correction/Verification during thought:
     - Check patch for `TwoSuM_optimal.cpp`: It returns `{left, right}`. These are indices in `sortedNums`, not `nums`. This is a bug for the standard problem. I should point it out gently in Notes.
     - Check patch for `TwoSuM_optimal.py`: Comment says "# This can be only used for like sayin Yes or No becosue we are not storing any index properly". I'll reference this.
     - The structure is fixed. I'll stick to it.
     - All good. Output matches response.✅
     Proceed. 
     Output Generation. 
     [Output Generation] -> *Proceeds*
     *(Self-Correction/Refinement during drafting)*: I'll make sure the file-by-file section explicitly lists each of the 6 files as requested, but groups them logically to avoid repetition. Actually, listing them individually is fine. I'll keep it tight.
     Structure check:
     # AI Explanation - TwoSuM
     ## Overview
     ## File-by-File Explanation
     ## Important Concepts
     ## How to Run or Review
     ## Notes
     Matches exactly. Content is accurate. Ready. 
     Output matches the final response. 
     [Done] 
     *Output Generation* (matches the final response)
     "# AI Explanation - TwoSuM
     ## Overview
     This pull request introduces six new files that implement three different algorithmic approaches to solve the classic **Two Sum** problem (finding two numbers in an array that add up to a specific target). Each approach is provided in both C++ and Python. The implementations include a `Solution` class and built-in test cases to demonstrate functionality.

     ## File-by-File Explanation
     - **`TwoSuM_bruteforce.cpp` & `TwoSuM_bruteforce.py`**: Implement the brute-force approach using nested loops. It iterates through every possible pair of numbers to find a match. Time complexity: O(n²), Space: O(1).
     - **`TwoSuM_optimal.cpp` & `TwoSuM_optimal.py`**: Implement a two-pointer technique on a sorted copy of the input array. Pointers start at both ends and move inward based on whether the current sum is less than or greater than the target. Time complexity: O(n log n) due to sorting, Space: O(n).
     - **`TwoSuM_optimised.cpp` & `TwoSuM_optimised.py`**: Implement the hash map (dictionary) approach. It iterates through the array once, storing each number and its index. For each number, it checks if its complement (`target - current_number`) already exists in the map. Time complexity: O(n), Space: O(n).

     ## Important Concepts
     - **Time vs. Space Trade-offs**: The files clearly demonstrate how algorithmic choices impact performance. Brute force minimizes memory but scales poorly. The hash map uses extra memory to achieve linear time complexity.
     - **Two-Pointer Technique**: Efficiently narrows the search space in sorted datasets by moving boundaries inward based on comparison results.
     - **Hash Maps / Dictionaries**: Enable O(1) average-time lookups, making them ideal for complement-finding problems like Two Sum.
     - **Index Preservation**: The standard Two Sum problem requires returning the *original* indices. The hash map approach handles this correctly, while the sorting approach returns indices relative to the sorted array.

     ## How to Run or Review
     - **C++ Files**: Compile and execute using a standard C++ compiler:
       `g++ TwoSuM_bruteforce.cpp -o bruteforce && ./bruteforce`
     - **Python Files**: Run directly with Python 3:
       `python3 TwoSuM_optimised.py`
     - All files contain hardcoded test cases in their execution blocks that print the resulting index pairs to the console.

     ## Notes
     - **Naming Convention**: The files use `optimal` for the sorting approach and `optimised` for the hash map approach. In standard algorithmic practice, the hash map solution is considered the true optimal solution for this problem due to its O(n) time complexity and correct index handling.
     - **Index Limitation**: As noted in the Python `optimal` file, sorting the array loses the original indices. This makes the two-pointer approach unsuitable for the exact LeetCode prompt, though it's excellent for learning the technique.
     - **Formatting**: Consider standardizing naming (e.g., `two_sum_brute_force.cpp`, `two_sum_hashmap.cpp`) and applying consistent code formatting across both languages for better long-term maintainability." 
     All checks pass. Output matches.✅
     Proceeds. 
     [Output Generation] -> *Done.* 
     *(Self-Correction/Verification during output gen prep)*: I'll double check the exact structure requested.
     "# AI Explanation - TwoSuM
     ## Overview
     ## File-by-File Explanation
     ## Important Concepts
     ## How to Run or Review
     ## Notes"
     Matches exactly. Content is accurate, concise, beginner-friendly. No invented behavior. Ready. 
     Output matches response.✅
</think>

# AI Explanation - TwoSuM

## Overview
This pull request adds six new files that implement three different algorithmic approaches to solve the classic **Two Sum** problem (finding two numbers in an array that add up to a specific target). Each approach is provided in both C++ and Python. Every file contains a `Solution` class and a built-in test suite that prints the resulting index pairs to the console.

## File-by-File Explanation
- **`TwoSuM_bruteforce.cpp` & `TwoSuM_bruteforce.py`**: Implement the brute-force approach using nested loops. It checks every possible pair of numbers until a match is found. Time complexity: O(n²), Space: O(1).
- **`TwoSuM_optimal.cpp` & `TwoSuM_optimal.py`**: Implement a two-pointer technique on a sorted copy of the input array. Pointers start at both ends and move inward based on whether the current sum is less than or greater than the target. Time complexity: O(n log n) due to sorting, Space: O(n).
- **`TwoSuM_optimised.cpp` & `TwoSuM_optimised.py`**: Implement the hash map (dictionary) approach. It iterates through the array once, storing each number and its index. For each number, it checks if its complement (`target - current_number`) already exists in the map. Time complexity: O(n), Space: O(n).

## Important Concepts
- **Time vs. Space Trade-offs**: The files demonstrate how algorithmic choices impact performance. Brute force uses minimal memory but scales poorly. The hash map uses extra memory to achieve linear time complexity.
- **Two-Pointer Technique**: Efficiently narrows the search space in sorted datasets by moving boundaries inward based on comparison results.
- **Hash Maps / Dictionaries**: Enable O(1) average-time lookups, making them ideal for complement-finding problems like Two Sum.
- **Index Preservation**: The standard
