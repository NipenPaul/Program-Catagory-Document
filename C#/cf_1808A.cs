using System;
					
public class Program
{
	public static void Main()
	{
		Program p = new Program();
		int t;
		t = int.Parse(Console.ReadLine());
		
		while(t > 0){
			int l, r;
			var arr = Console.ReadLine().Split(' ');
			l = Int32.Parse(arr[0]);
			r = Int32.Parse(arr[1]);
			
			int ans = l, mx = 0;
			for(int i = l; i <= Math.Min(l+100, r); i++){
				int d = p.cnt(i);
				if(mx < d){
					mx = d;
					ans = i;
				}
			}
			Console.WriteLine(ans);
			t--;
		}
	}
	public int cnt(int x){
		int mx = 0, mn = 10;
		while(x > 0){
			int d = x % 10;
			if(mx < d){
				mx = d;
			}
			if(mn > d){
				mn = d;
			}
			x /= 10;
		}
		return mx-mn;
	}
}
