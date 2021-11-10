namespace dualarms {
namespace utils {

class log_manager {
 public:
  log_manager() = default;
  ~log_manager() = default;

  void initialize();
  void shutdown();
};

}  // namespace utils
}  // namespace dualarms
