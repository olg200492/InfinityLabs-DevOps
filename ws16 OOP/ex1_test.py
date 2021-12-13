from ex1 import Point

if __name__ == "__main__":
    p1 = Point(1, 2)
    p2 = Point(2, 3)
    print(p1 + p2)
    p1_id = id(p1)
    p1 *= 2
    print(p1)
    print(p1.get_counter())
    print(id(p1) == p1_id)
    print("len = " + str(len(p1)))
    del(p1)
    print(Point.counter)
    del(p2)
    print(Point.counter)
    
  