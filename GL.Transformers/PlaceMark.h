#pragma once

#include <string>
#include "coordinates.h"

using namespace std;

namespace GLTransformer {

	class PlaceMark
	{
		public:
			PlaceMark(Coordinates &c);
			~PlaceMark();

			//PlaceMark(const PlaceMark &placeMark);             // copy constructor
			//PlaceMark & operator=(const PlaceMark &placeMark); // assignment

			string Id() const { return _id; }
			void Id(const string& id) { _id = id; }

			string Name() const { return _name; }
			void Name(const string& name) { _name = name; }
			
			string Description() const { return _description; }
			void Description(const string& description) { _description = description; }

			string ExtendedIntersectionName() const { return _extIntersectionName; }
			void ExtendedIntersectionName(const string& extIntersectionName) { _extIntersectionName = extIntersectionName; }

			string ExtendedSignalization() const { return _extSignalization; }
			void ExtendedSignalization(const string& extSignalization) { _extSignalization = extSignalization; }

			Coordinates Intersection() const { return _intersection; }
			void Intersection(Coordinates intersection) { _intersection = intersection; }

		private:
			string _id;
			string _name;
			string _description;
			//extended data
			string _extIntersectionName;
			string _extSignalization;

			Coordinates _intersection;
	};
}

