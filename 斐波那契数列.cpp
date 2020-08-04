class Solution{
public:
	int fibonacci(int n){
		int result =0;
		int num1=0;
		int num2=0;
		if(n==1){
			return num1;
		}
		else if(n==2){
			return num2;
		}	
		else{
			for(int i=0;i<=n;i++){
				result = num1+num2;
				num1=num2;
				num2=result;
			}
			return result;
		}
	}
};