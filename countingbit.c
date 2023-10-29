//Counting bits or solving bit manipulation problems
def count_set_bits(n):
    count = 0
    while n:
        count += n & 1
        n >>= 1
    return count

def find_missing_number(nums):
    # XOR all the elements in the list
    xor_all = 0
    for num in nums:
        xor_all ^= num

    # XOR all numbers from 1 to n
    xor_n = 0
    for i in range(1, len(nums) + 2):
        xor_n ^= i

    return xor_all ^ xor_n

# Example usage:
number = 42
bit_count = count_set_bits(number)
print(f"Number of set bits in {number} is {bit_count}")

missing_number = find_missing_number([1, 2, 4, 6])
print(f"The missing number in the list is {missing_number}")
