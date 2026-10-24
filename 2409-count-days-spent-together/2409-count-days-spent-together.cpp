class Solution {
public:
   int todays( string date){
      int monthtodays[] = {31,28,31,30,31,30,31,31,30,31,30,31};
       int month = stoi(date.substr(0,2));
       int days = stoi(date.substr(3,2));
       int total = days;
       for(int i =0;i<month-1;i++){
        total = total + monthtodays[i];
       }
       return total;

   }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int a1 = todays(arriveAlice);
        int a2 = todays(leaveAlice);
        int b1 = todays(arriveBob);
        int b2 = todays(leaveBob);
        int start = max(a1,b1);
        int end = min(a2,b2);
        if(start>end){
            return 0;
        }
        else 
        return( end - start +1);
    }
};