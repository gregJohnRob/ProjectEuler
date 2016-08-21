palindromicInt :: Int -> Bool
palindromicInt n = (show n) == (reverse $ show n)

largestPalindromic :: [Int] -> Int
largestPalindromic [] = 0
largestPalindromic (x:[]) = x
largestPalindromic (x:xs) = if palindromicInt x 
                            then max x $ largestPalindromic xs 
                            else largestPalindromic xs

main = print $ largestPalindromic $ (*) <$> [999,998..100] <*> [999,998..100]


