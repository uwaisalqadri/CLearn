//
//  JustCode.swift
//  Basic-C
//
//  Created by Uwais Alqadri on 11/18/22.
//

import Foundation
import SwiftUI

var age: Int = 15
var firstName = "Ray"


let hoursInADay = 24
let secondsInAMinute = 60
let quote = "If you don't work smart, you will probably be replaced by an AI."


var (updateCounter, message, noUpdateCounter) = (0, "Your Mom", 0)



class Shape {
  var numberOfSides = 0
  func simpleDescription() -> String {
    return "A shape with \(numberOfSides) sides."
  }
}


protocol Nameable {
  func name() -> String
}

func f<T: Nameable>(x: T) {
  print("Name is " + x.name())
}


extension Double {
    var km: Double { return self * 1_000.0 }
    var m: Double { return self }
    var cm: Double { return self / 100.0 }
    var mm: Double { return self / 1_000.0 }
    var ft: Double { return self / 3.28084 }
}


func main() {

  let shape = Shape()
  shape.numberOfSides = 7
  let shapeDescription = shape.simpleDescription()

  print(shapeDescription)


  let oneInch = 25.4.mm
  print("One inch is \(oneInch) meters")
  // prints "One inch is 0.0254 meters"
  let threeFeet = 3.ft
  print("Three feet is \(threeFeet) meters")
  // prints "Three feet is 0.914399970739201 meters"



  let nullableString: String? = nil

  guard let nullableString = nullableString else { print("null bang"); return}

  let anything: AnythingAnywhere = .loading

  if case let .success(name) = anything {
    print(name)
  }


  print("Oke")


}


enum AnythingAnywhere {
  case loading
  case success(name: String)
}


protocol Vehicle {

  var name: String { get }

  associatedtype FuelType
  func fillGasTank(with fuel: FuelType)
}


struct Car: Vehicle {

  let name = "car"

  func fillGasTank(with fuel: Gasoline) {
    print("Fill \(name) with \(fuel.name)")
  }
}

struct Bus: Vehicle {

  var name = "bus"

  mutating func another() {
    youDoYou(name: &name)
  }

  func fillGasTank(with fuel: Diesel) {
    print("Fill \(name) with \(fuel.name)")
  }

  func youDoYou(name: inout String) {
    print("name")
  }
}

struct Gasoline {
  let name = "gasoline"
}

struct Diesel {
  let name = "diesel"
}

struct TVShow {
  let id: Int

  struct Season {
    let number: Int
  }
}

func trye() {

outerLoop: for tvShowId in 0...10000 {
    innerLoop: for seasonNumber in 0...100 {
      guard tvShowId == 5 else { continue outerLoop }
      guard seasonNumber == 50 else { break outerLoop }
    }
}


}

fileprivate struct Animal {

}

func anu() {

  var a = ("Uwais", "Bola")
}


protocol Misalnya {
  func resolve() -> String
}

extension Misalnya {
  func resolve() -> String {
    return "OKe"
  }
}

struct AnuIni: Misalnya {
  var closure: () -> Void
}
