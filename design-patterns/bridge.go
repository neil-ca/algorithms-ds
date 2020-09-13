package main

import "fmt"

//IDrawShape interface
type IDrawShape interface {
	drawShape(x [5]float32, y [5]float32)
}

//IDrawShape struct
type DrawShape struct{}

// DrawShape struct has method draw Shape with float x and y coordinates
func (drawShape DrawShape) drawShape(x [5]float32, y [5]float32) {
	fmt.Println("Drawing Shape")
}

//ICountour interface
type ICountour interface {
	drawContour(x [5]float32, y [5]float32)
	resizeByFactor(factor int)
}

//DrawContour struct
type DrawContour struct {
	x      [5]float32
	y      [5]float32
	shape  DrawShape
	factor int
}

//DrawContour method drawContour given the coordinates
func (contour DrawContour) drawContour(x [5]float32, y [5]float32) {
	fmt.Println("Drawing contour")
	contour.shape.drawShape(contour.x, contour.y)
}

//DrawContour method resizeByFactor given factor
func (contour DrawContour) resizeByFactor(factor int) {
	contour.factor = factor
}
func main() {
	var x = [5]float32{1, 2, 3, 4, 5}
	var y = [5]float32{1, 2, 3, 4, 5}
	var contour ICountour = DrawContour{x, y, DrawShape{}, 2}
	contour.drawContour(x, y)
	contour.resizeByFactor(2)
}
