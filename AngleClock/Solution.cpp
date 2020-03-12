class Solution {
public:
    double angleClock(int hour, int minutes) {
        
        double mdegrees = minutes * 6;
        double hdegrees = (hour % 12)*30 + minutes/2.0;
        double result = min(abs(hdegrees - mdegrees), abs(mdegrees + hdegrees));
        
        return min(result, 360 - result);
        
    }
};