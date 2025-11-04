#include <iostream>
using namespace std;
#define int long long
#define ll long long
const int mod = 100003;
int fast_exp(int base, int power, int mod) // (base^power)%mol
{
    int ans = 1;
    while(power)
    {
        if(power & 1)
        {
            ans *= base;
            ans %= mod;
        }
        base *= base;
        base %= mod;
        power >>= 1;
    }
    return ans;
}

inline ll pow(ll a)
{
	return (a*a)%mod;
}
inline ll qmi(ll a,ll b)
{
	if(b==0)return 1;
	return (b&1)?pow(qmi(a,b>>1))*(a%mod)%mod:pow(qmi(a,b>>1));
}
