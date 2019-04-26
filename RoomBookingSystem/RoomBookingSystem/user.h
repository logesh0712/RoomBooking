#include"common.h"
#include"Cart.h"
#include"RoomBookingSystem.h"

class User {
private:
	int userId;
	string userName;
	Cart cart;
	RoomBookingSystem *bookingSystem;

	vector<Hotel> selectHotel(HotelType type,RoomType roomType);
	void addToCart(Hotel hotel,vector<Room> room);

	Receipt bookRoom();
};