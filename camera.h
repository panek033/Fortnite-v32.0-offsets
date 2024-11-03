U NEED TO UPDATE YOUR CAMERA TO GET ESP SHOWING UP AND AIMBOT WORK
USE "get_view_point" INSTEAD OF YOUR PREVIOUS GET_CAMERA

inline double RadiansToDegrees(double dRadians)
{
	return dRadians * (180.0 / M_PI);
}

auto GetViewState() -> uintptr_t
{
	TArray2<uintptr_t> ViewState = read<TArray2<uintptr_t>>(CachePointers.LocalPlayer + 0xD0);
	return ViewState.Get(1);
}

camera_position_s get_view_point()
{
	camera_position_s camera;

	auto mProjection = read<FMatrix>(GetViewState() + 0x900);
	camera.rotation.x = RadiansToDegrees(std::asin(mProjection.ZPlane.W));
	camera.rotation.y = RadiansToDegrees(std::atan2(mProjection.YPlane.W, mProjection.XPlane.W));
	camera.rotation.z = 0.0;

	camera.location.x = mProjection.m[3][0];
	camera.location.y = mProjection.m[3][1];
	camera.location.z = mProjection.m[3][2];
	float FieldOfView = atanf(1 / read<double>(GetViewState() + 0x700)) * 2;
	camera.fov = (FieldOfView) * (180.f / M_PI); return camera;
}