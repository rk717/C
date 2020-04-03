Struct array: 结构中的数组

struct date dates[100];
struct date dates[] = {
  {4,5,2005},{2,4,2005}
  };
  
结构中的结构：

struct point{
  int x;
  int y;
};
struct rectangle{
  struct point pt1;
  struct point pt2;
};

struct rectangle r;
r.pt1.x

struct rectangle r, *rp;
rp = &r;

r.pt1.x // rp->pt1.x 
