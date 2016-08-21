-- 2520 is the smallest number that can be divided by each of the numbers from
-- 1 to 10 without any remainder.

-- What is the smallest positive number that is evenly divisible by all of the
-- numbers from 1 to 20?

-- we know that it has to be devisible by 10 and at least 20

-- will take an int and see if it is divisible by all ints in the array
divByAll :: [Int] -> Int -> Bool
divByAll [] _ = True
divByAll (x:[]) n = if n `mod` x == 0
                    then True
                    else False
divByAll (x:xs) n = if n `mod` x == 0
                    then divByAll xs n
                    else False

-- takes two arrays of integers and returns the first element in the second
-- array divisible by the first
smallestDivByAll :: [Int] -> [Int] -> Int
smallestDivByAll [] _ = 0
smallestDivByAll _ [] = 0
smallestDivByAll factors (n:[]) = if divByAll factors n
                                  then n
                                  else 0
smallestDivByAll factors (n:ns) = if divByAll factors n
                                  then n
                                  else smallestDivByAll factors ns

main = print $ smallestDivByAll [1..20] [20,40..x]
       where x = 1*2*3*4*5*6*7*8*9*10*11*12*13*14*15*16*17*18*19*20
