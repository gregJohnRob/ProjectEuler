-- Given that the first 6 prime numbers are 2,3,5,7,11 and 13
-- find the 10,001st prime

nthPrime :: [Integer] -> Integer -> Integer
nthPrime (x:xs) 1 = x
nthPrime (x:xs) n = nthPrime [p | p <- xs, p `mod` x /= 0] (n-1)

main = print $ nthPrime [2..] 10001
