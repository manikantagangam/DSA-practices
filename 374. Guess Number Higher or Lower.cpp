/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution
{
public:
    int guessNumber(int n)
    {
        int l = 1, r = n, c = l + (r - l) / 2;

        while (true)
        {
            switch (guess(c))
            {
            case -1:
                r = c - 1;
                c = l + (r - l) / 2;
                break;
            case 1:
                l = c + 1;
                c = l + (r - l) / 2;
                break;
            case 0:
                return c;
            }
        }
        return 0;
    }
};