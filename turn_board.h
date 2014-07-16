#define turn_board() {\
	tmp = a;\
	a = (e == 0 ? 0 : 25 - e);\
	e = (tmp == 0 ? 0 : 25 - tmp);\
	tmp = b;\
	b = (f == 0 ? 0 : 25 - f);\
	f = (tmp == 0 ? 0 : 25 - tmp);\
	tmp = c;\
	c = (g == 0 ? 0 : 25 - g);\
	g = (tmp == 0 ? 0 : 25 - tmp);\
	tmp = d;\
	d = (h == 0 ? 0 : 25 - h);\
	h = (tmp == 0 ? 0 : 25 - tmp);\
}
