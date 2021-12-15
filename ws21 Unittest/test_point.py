from math import sqrt
import unittest
from point import Point, ValueNotNumber

class PointTest(unittest.TestCase):
    def setUp(self):
        """set up 2 point object"""
        self.p1 = Point(1, 2)
        self.p2 = Point(3, 4)
    
    def testInit(self):
        """test for init method
        -test valid input
        -test if object attributes type float
        -test exception raised when initialize with non type number"""
        self.assertEqual(self.p1.x, 1.0)
        self.assertEqual(self.p1.y, 2.0)
        self.assertIsInstance(self.p1.x, float)
        self.assertIsInstance(self.p1.y, float)
        self.assertRaises(ValueNotNumber, Point, 1, 'j')
        self.assertRaises(ValueNotNumber, Point, 'k', 'j')
        self.assertRaises(ValueNotNumber, Point, 'k', 2)
    
    def testDistance_from_origin(self):
        self.assertEqual(self.p1.distance_from_origin(), sqrt(5))
    
    def testClassMethod(self):
        self.assertEqual(self.p1.get_counter(), 2)
    
    def testAdd(self):
        p3 = self.p1 + self.p2
        self.assertEqual(p3.x, 4)
        self.assertEqual(p3.y, 6)
        
    def testSub(self):
        p4 = self.p1 - self.p2
        self.assertEqual(p4.x, -2)
        self.assertEqual(p4.y, -2)
        
    def testMul(self):
        p5 = self.p1 * 2
        self.assertEqual(p5.x, 2)
        self.assertEqual(p5.y, 4)
        
    def testIMul(self):
        self.p1 *= 3
        self.assertEqual(self.p1.x, 3)
        self.assertEqual(self.p1.y, 6)
        
    def testTrueDiv(self):
        p6 = self.p1 /2
        self.assertEqual(p6.x, 0.5)
        self.assertEqual(p6.y, 1)
        self.assertRaises(ZeroDivisionError, self.p1.__truediv__ , 0 )
        
    def testLen(self):
        self.assertEqual(len(self.p1), 2)
    
    def testGet_point_x(self):
        self.assertEqual(self.p1.get_point_x(), 1)
    
    def testGet_point_y(self):
        self.assertEqual(self.p1.get_point_y(), 2)
        
    def testSet_point_x(self):
        self.p1.set_point_x(5)
        self.assertEqual(self.p1.x, 5)
        self.assertRaises(ValueNotNumber, self.p1.set_point_x, 'k')
        
    def testSet_point_y(self):
        self.p1.set_point_y(6)
        self.assertEqual(self.p1.y, 6)
        self.assertRaises(ValueNotNumber, self.p1.set_point_y, "mmm")
        
    def testStr(self):
        self.assertEqual(str(self.p1), "Point(1.0, 2.0)")
        
    def testDel(self):
        del self.p1.x
        self.assertNotIn("_Point__x", self.p1.__dict__)
        self.assertEqual(len(self.p1.__dict__.keys()), 1)

        
  
       
if __name__ == '__main__':
    unittest.main()