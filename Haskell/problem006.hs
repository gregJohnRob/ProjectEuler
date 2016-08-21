sumOfSquare :: [Integer] -> Integer
sumOfSquare [] = 0
sumOfSquare l = foldl (\acc x -> acc + (x^2)) 0 l

squareOfSum :: [Integer] -> Integer
squareOfSum [] = 0
squareOfSum l = (sum l)^2

main = print ((squareOfSum x) - (sumOfSquare x))
       where x = [1..100]
