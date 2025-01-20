
# initial score = 0
# tokens[i]
# power

# two methord to scroe up

# 1. face_up (score up)
#         conditon -> if c_power >= tokens[i]
#             score = +1
#             i--;

# 2. face_down(score down)
#         condition -> if c_score >= 1
#             score -= 1
#             power += m_tokens[i]

class Solution(object):
    def bagOfTokensScore(self, tokens, power):
        """
        :type tokens: List[int]
        :type power: int
        :rtype: int
        """
        score = 0
        maximum_score = 0

        tokens.sort()

        left = 0                      #two pointer concept
        right = len(tokens) - 1

        while left <= right:
            if power >= tokens[left]:
                power -= tokens[left]
                score += 1
                left+=1
                maximum_score = max(maximum_score, score)

            elif score >= 1:
                power += tokens[right]
                score -= 1
                right -= 1

            else:
                break
            
        return maximum_score
        

   

tokens = [100,200,300,400]
power = 200
tokenScore = Solution()
maximum_score = tokenScore.bagOfTokensScore(tokens,power)
print("maximum score is : ",maximum_score)

