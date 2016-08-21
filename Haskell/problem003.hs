-- loop over an array
-- At every element
--   if it is a factor of n, return it appended to the end of the list of prime factors
--   remove all values which are divisible by the factorx

largestPrime :: [Int] -> Int
largestPrime [] = 0
largestPrime (x:[]) = x
largestPrime (x:factors) = max (largestPrime [a | a <- factors, a `mod` x /= 0] ) x

factors :: Int -> [Int]
factors 0 = []
factors n = [x | x <- [2..n'], n `mod` x == 0]
            where n' = round $ sqrt $ fromIntegral n

main = print $ largestPrime $ factors n
       where n = 600851475143
             a = 13195


