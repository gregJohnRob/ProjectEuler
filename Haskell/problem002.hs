-- fib number is sum of previous two fib numbers 
fib :: (Integral a, Show a) => a -> a -> a
fib x y = x + y

sumEvenFibLessThanZ :: (Integral a, Show a) => a -> a -> a -> a
sumEvenFibLessThanZ x y z
    | x > z          = 0
    | x `mod` 2 == 0 = x + sumEvenFibLessThanZ y (y+x) z
    | otherwise = sumEvenFibLessThanZ y (y+x) z


main = print (sumEvenFibLessThanZ 1 2 4000000)
