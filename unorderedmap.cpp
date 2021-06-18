#include <bits/stdc++.h>

using namespace std;

int main()
{
	unordered_map<string, int> m;

	m["nir"] = 19;
	m["bib"] = 20;
	m["pri"] = 38;
	m["nir"] = 33;

	m.insert({"lolu", 123});
	m.erase("nir");
	// for (auto x : m)
	// {
	// 	cout << x.first << " " << x.second << endl;
	// }
	cout << m.count("nr") << endl;
	for (auto it = m.begin(); it != m.end(); it++)
	{
		cout << (*it).first << " " << it->second << endl;
	}
	if (m.find("nir") == m.end())
	{
		cout << "not found" << endl;
	}
	else
	{
		cout << "Found" << endl;
	}
}