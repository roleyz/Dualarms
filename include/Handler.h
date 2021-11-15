#ifndef HANDLER_H
#define HANDLER_H
#include <oatpp/web/server/HttpRequestHandler.hpp>

namespace dualarms {
namespace web {

class Chello_handler : public oatpp::web::server::HttpRequestHandler {
 public:
  /* Chello_handler(); */
  /* virtual ~Chello_handler(); */
  std::shared_ptr<OutgoingResponse> handle(
      const std::shared_ptr<IncomingRequest> &request) override;

  /* private: */
  /*  typedef oatpp::web::protocol::http::outgoing::Response OutgoingResponse;
   */
  /*  typedef oatpp::web::protocol::http::incoming::Request IncomingRequest; */
};

}  // namespace web
}  // namespace dualarms
#endif
