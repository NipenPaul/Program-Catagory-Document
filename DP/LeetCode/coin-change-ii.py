class Solution:
    def change(self, amount: int, coins: List[int]) -> int:
        way = [0] * (amount+1)
        way[0] = 1
        for coin in coins:
            for i in range(coin, amount+1, 1):
                way[i] += way[i - coin]
        return way[amount]
