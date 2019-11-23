Action()
{

	web_reg_find("Text=JPetStore Demo", 
		LAST);

	web_url("jpetstore", 
		"URL=http://{host_localhost_8080}/jpetstore/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("jpetstore.css", 
		"URL=http://{host_localhost_8080}/jpetstore/css/jpetstore.css", 
		"Resource=0", 
		"RecContentType=text/css", 
		"Referer=http://{host_localhost_8080}/jpetstore/", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("favicon.ico", 
		"URL=http://{host_localhost_8080}/favicon.ico", 
		"Resource=0", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("HomePage");

	web_reg_find("Text=JPetStore Demo", 
		LAST);

	lr_think_time(20);

	web_url("Catalog.action", 
		"URL=http://{host_localhost_8080}/jpetstore/actions/Catalog.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host_localhost_8080}/jpetstore/", 
		"Snapshot=t4.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("HomePage",LR_AUTO);

	lr_start_transaction("SigninPage");

	web_reg_find("Text=JPetStore Demo", 
		LAST);

	web_url("Sign In", 
		"URL=http://{host_localhost_8080}/jpetstore/actions/Account.action;jsessionid=32B9145198731A2E32A35B035343E9BA?signonForm=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host_localhost_8080}/jpetstore/actions/Catalog.action", 
		"Snapshot=t5.inf", 
		"Mode=HTTP", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	lr_end_transaction("SigninPage",LR_AUTO);

	lr_start_transaction("HomePageAfterSignin");

	lr_save_string(lr_unmask("5dd8d1b058bdf25bf518aa1587"), "PasswordParameter");

	web_reg_find("Text=JPetStore Demo", 
		LAST);

	web_submit_data("Account.action", 
		"Action=http://{host_localhost_8080}/jpetstore/actions/Account.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{host_localhost_8080}/jpetstore/actions/Account.action;jsessionid=32B9145198731A2E32A35B035343E9BA?signonForm=", 
		"Snapshot=t6.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=username", "Value=swastikpattnaik3000", ENDITEM, 
		"Name=password", "Value={PasswordParameter}", ENDITEM, 
		"Name=signon", "Value=Login", ENDITEM, 
		"Name=_sourcePage", "Value=CMNqEABoaya6-ErsUTgXd0GP7bNHrBkAlmQ6LcTrRga2qcXPvgG2oA==", ENDITEM, 
		"Name=__fp", "Value=4OoLDOaPz4s=", ENDITEM, 
		LAST);

	lr_end_transaction("HomePageAfterSignin",LR_AUTO);

	lr_start_transaction("SelectCategory");

	web_reg_find("Text=JPetStore Demo", 
		LAST);

	lr_think_time(49);

	web_url("sm_cats.gif", 
		"URL=http://{host_localhost_8080}/jpetstore/actions/Catalog.action?viewCategory=&categoryId=CATS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host_localhost_8080}/jpetstore/actions/Catalog.action", 
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("SelectCategory",LR_AUTO);

	lr_start_transaction("SelectProduct");

	web_reg_find("Text=JPetStore Demo", 
		LAST);

	lr_think_time(39);

	web_url("FL-DSH-01", 
		"URL=http://{host_localhost_8080}/jpetstore/actions/Catalog.action?viewProduct=&productId=FL-DSH-01", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host_localhost_8080}/jpetstore/actions/Catalog.action?viewCategory=&categoryId=CATS", 
		"Snapshot=t8.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("SelectProduct",LR_AUTO);

	lr_start_transaction("SelectItem");

	web_reg_find("Text=JPetStore Demo", 
		LAST);

	lr_think_time(64);

	web_url("EST-14", 
		"URL=http://{host_localhost_8080}/jpetstore/actions/Catalog.action?viewItem=&itemId=EST-14", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host_localhost_8080}/jpetstore/actions/Catalog.action?viewProduct=&productId=FL-DSH-01", 
		"Snapshot=t9.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("SelectItem",LR_AUTO);

	lr_start_transaction("AddToCart");

	web_reg_find("Text=JPetStore Demo", 
		LAST);

	lr_think_time(23);

	web_url("Add to Cart", 
		"URL=http://{host_localhost_8080}/jpetstore/actions/Cart.action?addItemToCart=&workingItemId=EST-14", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host_localhost_8080}/jpetstore/actions/Catalog.action?viewItem=&itemId=EST-14", 
		"Snapshot=t10.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("AddToCart",LR_AUTO);

	lr_start_transaction("UpdateQuantity");

	lr_end_transaction("UpdateQuantity",LR_AUTO);

	lr_start_transaction("UpdateCart");

	web_reg_find("Text=JPetStore Demo", 
		LAST);

	lr_think_time(78);

	web_submit_data("Cart.action", 
		"Action=http://{host_localhost_8080}/jpetstore/actions/Cart.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{host_localhost_8080}/jpetstore/actions/Cart.action?addItemToCart=&workingItemId=EST-14", 
		"Snapshot=t11.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=EST-14", "Value=3", ENDITEM, 
		"Name=updateCartQuantities", "Value=Update Cart", ENDITEM, 
		"Name=_sourcePage", "Value=JV1RB8b4k2S6-ErsUTgXd1Z0sbViFfZHFizNmeR2jx8=", ENDITEM, 
		"Name=__fp", "Value=FXw48iy3nv4=", ENDITEM, 
		LAST);

	lr_end_transaction("UpdateCart",LR_AUTO);

	lr_start_transaction("ProceedToCheckout");

	web_reg_find("Text=JPetStore Demo", 
		LAST);

	lr_think_time(28);

	web_url("Proceed to Checkout", 
		"URL=http://{host_localhost_8080}/jpetstore/actions/Order.action?newOrderForm=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host_localhost_8080}/jpetstore/actions/Cart.action", 
		"Snapshot=t12.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("ProceedToCheckout",LR_AUTO);

	lr_start_transaction("FillBillingAndPaymentDetails");

	web_reg_find("Text=JPetStore Demo", 
		LAST);

	lr_think_time(59);

	web_submit_data("Order.action", 
		"Action=http://{host_localhost_8080}/jpetstore/actions/Order.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{host_localhost_8080}/jpetstore/actions/Order.action?newOrderForm=", 
		"Snapshot=t13.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=order.cardType", "Value=Visa", ENDITEM, 
		"Name=order.creditCard", "Value=999 9999 9999 9999", ENDITEM, 
		"Name=order.expiryDate", "Value=12/03", ENDITEM, 
		"Name=order.billToFirstName", "Value=SWASTIK", ENDITEM, 
		"Name=order.billToLastName", "Value=PATTNAIK", ENDITEM, 
		"Name=order.billAddress1", "Value=Plot No.-57/B, Unit-7", ENDITEM, 
		"Name=order.billAddress2", "Value=Suryanagar", ENDITEM, 
		"Name=order.billCity", "Value=Bhubaneswar", ENDITEM, 
		"Name=order.billState", "Value=Odisha", ENDITEM, 
		"Name=order.billZip", "Value=751003", ENDITEM, 
		"Name=order.billCountry", "Value=India", ENDITEM, 
		"Name=shippingAddressRequired", "Value=true", ENDITEM, 
		"Name=newOrder", "Value=Continue", ENDITEM, 
		"Name=_sourcePage", "Value=sDmtfBeLn_26-ErsUTgXd1Bls8PVwvHcA86JWv7x2ge2qcXPvgG2oA==", ENDITEM, 
		"Name=__fp", "Value=ER6okwLq-ekNGcQ9VBaz849CVOZLZj3sZx75xhiXBc04rvtR4ti0cvgG9PvSvdGZ", ENDITEM, 
		LAST);

	lr_end_transaction("FillBillingAndPaymentDetails",LR_AUTO);

	lr_start_transaction("FillShippingAddress");

	web_reg_find("Text=JPetStore Demo", 
		LAST);

	lr_think_time(22);

	web_submit_data("Order.action_2", 
		"Action=http://{host_localhost_8080}/jpetstore/actions/Order.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{host_localhost_8080}/jpetstore/actions/Order.action", 
		"Snapshot=t14.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=order.shipToFirstName", "Value=SWASTIK", ENDITEM, 
		"Name=order.shipToLastName", "Value=PATTNAIK", ENDITEM, 
		"Name=order.shipAddress1", "Value=Plot No.-57/B, Unit-7", ENDITEM, 
		"Name=order.shipAddress2", "Value=Suryanagar", ENDITEM, 
		"Name=order.shipCity", "Value=Bhubaneswar", ENDITEM, 
		"Name=order.shipState", "Value=Odisha", ENDITEM, 
		"Name=order.shipZip", "Value=751003", ENDITEM, 
		"Name=order.shipCountry", "Value=India", ENDITEM, 
		"Name=newOrder", "Value=Continue", ENDITEM, 
		"Name=_sourcePage", "Value=XLcdg0u2Ena6-ErsUTgXd4WuXgib3j0CAys7DFxQdqe2qcXPvgG2oA==", ENDITEM, 
		"Name=__fp", "Value=530RFknBAtY=", ENDITEM, 
		LAST);

	lr_end_transaction("FillShippingAddress",LR_AUTO);

	lr_start_transaction("ConfirmOrder");

	web_reg_find("Text=JPetStore Demo", 
		LAST);

	lr_think_time(27);

	web_url("Confirm", 
		"URL=http://{host_localhost_8080}/jpetstore/actions/Order.action?newOrder=&confirmed=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host_localhost_8080}/jpetstore/actions/Order.action", 
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("ConfirmOrder",LR_AUTO);

	lr_start_transaction("ReturnToMainMenu");

	web_reg_find("Text=JPetStore Demo", 
		LAST);

	lr_think_time(40);

	web_url("Return to Main Menu", 
		"URL=http://{host_localhost_8080}/jpetstore/actions/Catalog.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host_localhost_8080}/jpetstore/actions/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("ReturnToMainMenu",LR_AUTO);

	lr_start_transaction("SignOut");

	web_reg_find("Text=JPetStore Demo", 
		LAST);

	web_url("Sign Out", 
		"URL=http://{host_localhost_8080}/jpetstore/actions/Account.action?signoff=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host_localhost_8080}/jpetstore/actions/Catalog.action", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("SignOut",LR_AUTO);

	return 0;
}