/*
#include "pch.h"
#include <iostream>

int main()
{
    std::cout << "Hello World!\n"; 
}

*/

#include"RoomBookingSystem.h"

vector<Hotel> RoomBookingSystem::getHotels(HotelType hotelType,RoomType roomType, vector<Date> dates) {
	/*
	if (hotelType == NULL && roomType == NULL)
		return hotels;

	*/

	vector<Hotel> filteredHotels;
	Hotel curHotel;
	vector<Room> rooms;

	for (vector<Hotel>::iterator it = hotels.begin(); it != hotels.end(); it++) {
	
		curHotel = *it;
		rooms.clear();

		if (hotelType != NULL && it->getHotelType() != hotelType) {
			continue;
		}

		rooms = it->getRooms(roomType, dates);

		curHotel.setRooms(rooms);
		
		filteredHotels.push_back(curHotel);
	}


	return filteredHotels;
}