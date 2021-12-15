from math import sqrt
import unittest
from point import Point, ValueNotNumber

class PointTest(unittest.TestCase):
    def setUp(self):
        self.p1 = Point(1, 2)
        self.p2 = Point(3, 4)
    
    def testInit(self):
        self.assertEqual(self.p1.x, 1.0)
        self.assertEqual(self.p1.y, 2.0)
        self.assertIsInstance(self.p1.x, float)
        self.assertIsInstance(self.p1.y, float)
        self.assertRaises(ValueNotNumber, Point, 1, 'j')
        self.assertRaises(ValueNotNumber, Point, 'k', 'j')
        self.assertRaises(ValueNotNumber, Point, 'k', 2)
    
    def testDistance_from_origin(self):
        self.assertEqual(self.p1.distance_from_origin(), sqrt(5))
    
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
if __name__ == '__main__':
    unittest.main()