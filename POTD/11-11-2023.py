class Solution:
    # Function to check if two strings are isomorphic.
    def areIsomorphic(self, str1, str2):
        if len(str1) != len(str2):
            return False

        mapping_str1_to_str2 = {}
        mapping_str2_to_str1 = {}

        for char1, char2 in zip(str1, str2):
            if char1 in mapping_str1_to_str2:
                if mapping_str1_to_str2[char1] != char2:
                    return False
            else:
                mapping_str1_to_str2[char1] = char2

            if char2 in mapping_str2_to_str1:
                if mapping_str2_to_str1[char2] != char1:
                    return False
            else:
                mapping_str2_to_str1[char2] = char1

        return True


