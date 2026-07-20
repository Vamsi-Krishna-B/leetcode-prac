# AI Explanation - ProductExceptSelf  

## Summary  
This PR adds a new module **`ProductExceptSelf.py`** that implements a solution to the classic “Product of Array Except Self” problem. The file defines a `Solution` class with a `productExceptSelf` method, and includes a small demo that prints the result for two example inputs.

## Approach  
The implementation follows the standard two‑pass algorithm:

1. **First pass (left‑to‑right)** – builds a running product of all elements to the left of each index and stores it in the result list.  
2. **Second pass (right‑to‑left)** – multiplies each entry in the result list by a running product of all elements to the right of that index.

By re‑using the output list for the left‑side products and applying the right‑side products in‑place, the solution achieves **O(n)** time with **O(1)** extra space (ignoring the output array).

## Key Logic  

```python
res = [1] * len(nums)          # output array, initially all 1s
prefix = 1                     # product of elements before the current index

# Left‑to‑right pass
for i in range(len(nums)):
    res[i] = prefix            # store product of all elements to the left
    prefix *= nums[i]          # update prefix for next index

postfix = 1                    # product of elements after the current index

# Right‑to‑left pass
for i in range(len(nums) - 1, -1, -1):
    res[i] *= postfix          # combine left product (already in res) with right product
    postfix *= nums[i]         # update postfix for next index
```

* The `res` list is pre‑filled with `1`s so that multiplication works even for the first element.  
* `prefix` and `postfix` are simple scalars, keeping auxiliary memory usage constant.  
* The method returns `res`, which now holds the product of all array elements except the one at each position.

The file also contains a quick sanity check:

```python
sol = Solution()
print(sol.productExceptSelf([1,2,3,4]))
print(sol.productExceptSelf([-1,1,0,-3,3]))
```

## Complexity and Tradeoffs  

| Aspect          | Details |
|-----------------|---------|
| **Time**        | Two linear scans → **O(n)** where *n* = `len(nums)`. |
| **Space**       | Only the output list is allocated → **O(1)** extra space (output not counted). |
| **Readability** | Straightforward loops; uses type hints (`List[int]`). |
| **Edge Cases**  | Works for typical inputs, but does not explicitly handle an empty list (would return `[]`). |
| **Side Effects**| The demo `print` statements execute on import, which is undesirable for a library module. |

## Run or Review Notes  

* **Import side effects** – The `print` demo runs whenever the module is imported. Consider guarding it with `if __name__ == "__main__":` or moving it to a separate test script.  
* **Empty input** – Adding a guard for `if not nums:` could make the function more robust.  
* **Documentation** – A short docstring for `productExceptSelf` would help future readers.  
* **Testing** – No unit tests are included; adding a few pytest cases would ensure correctness and guard against regressions.  

**Overall**, the PR introduces a correct, efficient implementation of the product‑except‑self algorithm with minimal code. Minor clean‑up (removing demo prints, adding docs/tests) would make it production‑ready.
