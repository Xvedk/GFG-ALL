class Solution {
  public:
    int rectanglesInCircle(int r) {
        // code here
        int diameter = 2 * r,squareDiameter = diameter * diameter;
        int rectangleCount = 0;
    
        for (int l = 1; l < diameter; ++l) {
            for (int w = 1; w < diameter; ++w) {
                if (l * l + w * w <= squareDiameter) {
                    rectangleCount++;
                }
            }
        }
        return rectangleCount;
    }
};
